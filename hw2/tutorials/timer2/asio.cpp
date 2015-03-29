/* Timer.2 - Using a timer asynchronously */

// This tutorial program demonstrates how to use asio's asynchronous callback
// functionality by modifying the program from tutorial Timer.1 to perform an
// asynchronous wait on the timer.

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

void print(const boost::system::error_code& /*e*/)
{
  std::cout << "Hello, world!\n";
}

int main()
{
  boost::asio::io_service io;
  
  boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
  t.async_wait(&print);

  io.run();

  return 0;
}
