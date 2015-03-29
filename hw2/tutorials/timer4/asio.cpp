/* Timer.4 - Using a member function as a handler */

// In this tutorial we will see how to use a class member function as a
// callback handler. The program should execute identically to the tutorial
// program from tutorial Timer.3.

#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

class printer
{
public:
  printer(boost::asio::io_service& io)
    : timer_(io, boost::posix_time::seconds(1)),
      count_(0)
  {
    timer_.async_wait(boost::bind(&printer::print, this));
  }
  
  ~printer()
  {
    std::cout << "Final count is " << count_ << "\n";
  }

  void print()
  {
    if (count_ < 5)
      {
	std::cout << count_ << "\n";
	++count_;

	timer_.expires_at(timer_.expires_at() + boost::posix_time::seconds(1));
	timer_.async_wait(boost::bind(&printer::print, this));
      }
  }

private:
  boost::asio::deadline_timer timer_;
  int count_;
};

int main()
{
  boost::asio::io_service io;
  printer p(io);
  io.run();

  return 0;
}
  

  
