# ![logo](https://www.sharkbite.io/wp-content/uploads/2017/02/sharkbite.jpg) Sharkbite 
[![Build Status](https://travis-ci.org/phrocker/sharkbite.svg?branch=master)](https://travis-ci.org/phrocker/sharkbite)

**S**harkbite is a native client for key/value stores. With 
initial support for [Apache Accumulo][accumulo], the design can and has been used to support other key/value
stores. Development began in 2014 and has  slowly evolved. there is no structural specificity to Accumulo
despite being the base implementation. Despite this the examples below will look very much like Accumulo due to aliasing. This is intentional.

Capabilities That will be supported in V0.4 : 

 * Work with Accumulo 1.6.x, 1.7.x, 1.8.x and 1.9.x
 * **Read/Write** : Reading and writing data to Accumulo is currently supported.
 * **Table Operations** : Most table operations are currently supported. This includes the fate operations that the normal Accumulo client performs.
 * **Security Operations** : Security operations aren't all implemented, but you should be able to add users, change authorizations, passwords, and remove users.
 
Current Master progress 
  * Development is focusing on abstracting out 2.x changes for Accumulo Proper. 

About the name

**S**harkbite's name originated from design as a connector that abstracted components in which we tightly
coupled and gripped interfaces of the underlying datastore. With an abstraction layer for access, and using
cross compatible objects, the underlying interfaces are heavily coupled to each database. As a result, Sharkbite
became a fitting name since interfaces exist to abstract the high coupling that exists within implementations of 
the API.

## Requirements

	GNU 4+
	cmake
	make
	
### For Libthrift
	bison 3+ 
	automake
	autotool
	autoconf
	libtool
	libevent

## Building Linux
```
	mkdir build && cd build && cmake .. && cmake --build . ; make test

	This will build the package and library, which you can use. It will also build
	examples in the examples directory

```

## Buildong on OSX

Follow the same procedures as above, but you may need to force linking bison 3.x
if you installed it via Homebrew

## Example
```C++

    //This code shows an example of reading data from an Accumulo instance.

    string instance = argv[1]
    string zookeepers = argv[2]
    string username = argv[3]
    string password = argv[4]

    ZookeeperInstance *instance = new ZookeeperInstance(instance, zookeepers, 1000);

    AuthInfo creds(username, password, instance->getInstanceId());

    interconnect::MasterConnect *master = new MasterConnect(&creds, instance);

    std::unique_ptr<interconnect::AccumuloTableOperations> ops = master->tableOps(
            table);
    // create the scanner with ten threads.
    std::unique_ptr<scanners::BatchScanner> scanner = ops->createScanner (&auths, 10);
    // range from a to d
    Key startkey;
    startkey.setRow("a", 1);
    Key stopKey;
    stopKey.setRow("d", 1);
    Range *range = new Range(startkey, true, stopKey, true); 
    // build your range.
    scanner->addRange(range);

    auto results = scanner->getResultSet ();

    for (const auto &iter : results) {
        KeyValue *kv = *iter;
        if (kv != NULL && kv->getKey() != NULL)
            cout << "got -- " << (*iter)->getKey() << endl;
        else
            cout << "Key is null" << endl;
    }
```


## Python Lib
The Python library can be installed by simply typing pip install . into the root source directory.
Note that our previous implementation in the python directory is deprecated as of V0.5

Note that python-deprecated represents the older C API library. This will be maintained until V1.0; however,
the Python library will transition to C++ bindings via pybind11. Therefore pip install in the root folder is
the preferred method. Examples can be found in pythonexamplepy in the root source folder.

[accumulo]: https://accumulo.apache.org