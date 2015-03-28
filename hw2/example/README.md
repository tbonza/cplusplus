Figuring out an Image Server
============================

Trying to figure out how to write an image server for the LowellMakes class
project. Below are some projects that look similar.

HTTP Server 3
--------------

An HTTP server using a single io_service and a thread pool calling
io_service::run(). Using the [boost_asio](http://www.boost.org/doc/libs/1_52_0/doc/html/boost_asio/examples.html) examples, I'm going to try to replicate.

Simple-Web-Server
-----------------

A very simple, fast, multithreaded, platform independent HTTP and HTTPS server
and client library implemented using C++11 and Boost.Asio. Created to be an
easy way to make REST resources available from C++ applications.

See also https://github.com/eidheim/Simple-WebSocket-Server for an easy way to
make WebSocket/WebSocket Secure endpoints in C++.
