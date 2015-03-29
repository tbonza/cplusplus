/* Timer.3 - Binding arguments to a handler */

// In this tutorial we will modify the program from tutorial Timer.2 so that
// the timer fires once a second. This will show how to pass additional
// parameters to your handler function.

#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

void print(const boost::system::error_code& /*e*/,
	   boost::asio::deadline_timer* t, int* count)
{
  if (*count < 5)
    {
      std::cout << *count << "\n";
      ++(*count);

      t->expires_at(t->expires_at() + boost::posix_time::seconds(1));
      t->async_wait(boost::bind(print,
				boost::asio::placeholders::error, t, count));
    }
}

int main()
{
  boost::asio::io_service io;

  int count = 0;
  boost::asio::deadline_timer t(io, boost::posix_time::seconds(1));
  t.async_wait(boost::bind(print,
			   boost::asio::placeholders::error, &t, &count));

  io.run();

  std::cout << "Final count is " << count << "\n";

  return 0;
}
