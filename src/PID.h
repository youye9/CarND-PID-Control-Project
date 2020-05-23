#include <vector>
#ifndef PID_H
#define PID_H
using std::vector;

class PID {
 public:
  /**
   * Constructor
   */
  PID();

  /**
   * Destructor.
   */
  virtual ~PID();

  /**
   * Initialize PID.
   * @param (Kp_, Ki_, Kd_) The initial PID coefficients
   */
  void Init(double Kp_, double Ki_, double Kd_);

  /**
  * PID Coefficients
  */

  /**
   * Update the PID error variables given cross track error.
   * @param cte The current cross track error
   */
  void UpdateError(double cte);

  /**
   * Calculate the total PID error.
   * @output The total PID error
   */
  double TotalError();
  double AveError();

 private:
  /**
   * PID Errors
   */
	 double Kp;
	 double Ki;
	 double Kd;

	 int counter;
	 
	 double p_error;
	 double i_error;
	 double d_error;
	 
	 double prev_cte;
	 double diff_cte;
	 double int_cte;
	 
	 double err;
	 double totalError;
};

#endif  // PID_H