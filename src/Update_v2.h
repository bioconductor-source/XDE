#ifndef UPDATE_V2_H
#define Update_V2_H

#include <vector>
#include <iostream>
#include <fstream>

#include "Random.h"
#include "Cholesky.h"

/*
// order of variables:
   unsigned int *seed,
   int nTry,
   int *nAccept,
   double epsilon,
   the variables to be changed,
   int Q,
   int G,
   const int *S
   const double *x,
   const int *psi,
   const double *nu,
   const int *delta,
   const double *Delta,
   double c2,
   double gamma2,
   const double *r,
   const double *rho,
   const double *sigma2,
   const double *phi,
   const double *t,
   const double *l,
   const double *theta,
   const double *lambda,
   const double *tau2R,
   const double *tau2Rho,
   const double *xi,
   const double *a,
   const double *b,
   double pA0,
   double pA1,
   double alphaA,
   double betaA,
   double pB0,
   double pB1,
   double alphaB,
   double betaB,
   double alphaXi,
   double betaXi,
   double nuR,
   double nuRho,
   double c2Max
*/

void updateANu(unsigned int *seed,
	       int nTry,
	       int *nAccept,
	       double epsilon,
	       double *a,
	       double *nu,
	       int Q,
	       int G,
	       const int *S,
	       const double *x,
	       const int *psi,
	       const int *delta,
	       const double *Delta,
	       double gamma2,
	       const double *rho,
	       const double *sigma2,
	       const double *phi,
	       const double *tau2Rho,
	       double pA0,
	       double pA1,
	       double alphaA,
	       double betaA);


void updateBDDelta(unsigned int *seed,
		   int nTry,
		   int *nAccept,
		   double epsilon,
		   double *b,
		   double *Delta,
		   int Q,
		   int G,
		   const int *S,
		   const double *x,
		   const int *psi,
		   const double *nu,
		   const int *delta,
		   double c2,
		   const double *r,
		   const double *sigma2,
		   const double *phi,
		   const double *tau2R,
		   double pB0,
		   double pB1,
		   double alphaB,
		   double betaB);


void updateTau2RhoNu(unsigned int *seed,
		     int nTry,
		     int *nAccept,
		     double epsilon,
		     double *tau2Rho,
		     double *nu,
		     int Q,
		     int G,
		     const int *S,
		     const double *x,
		     const int *psi,
		     const int *delta,
		     const double *Delta,
		     double gamma2,
		     const double *rho,
		     const double *sigma2,
		     const double *phi,
		     const double *a);

  
void updateTau2RDDelta(unsigned int *seed,
		       int nTry,
		       int *nAccept,
		       double epsilon,
		       double *tau2R,
		       double *Delta,
		       int Q,
		       int G,
		       const int *S,
		       const double *x,
		       const int *psi,
		       const double *nu,
		       const int *delta,
		       double c2,
		       const double *r,
		       const double *sigma2,
		       const double *phi,
		       const double *b);

  
void updateNu(unsigned int *seed,
	      int *nAccept,
	      double *nu,
	      int Q,
	      int G,
	      const int *S,
	      const double *x,
	      const int *psi,
	      const int *delta,
	      const double *Delta,
	      double gamma2,
	      const double *rho,
	      const double *sigma2,
	      const double *phi,
	      const double *tau2Rho,
	      const double *a);


void updateDDelta(unsigned int *seed,
		  int *nAccept,
		  double *Delta,
		  int Q,
		  int G,
		  const int *S,
		  const double *x,
		  const int *psi,
		  const double *nu,
		  const int *delta,
		  double c2,
		  const double *r,
		  const double *sigma2,
		  const double *phi,
		  const double *tau2R,
		  const double *b);


void updateC2(unsigned int *seed,
	      int nTry,
	      int *nAccept,
	      double *c2,
	      int Q,
	      int G,
	      const int *delta,
	      const double *Delta,
	      const double *r,
	      const double *sigma2,
	      const double *tau2R,
	      const double *b,
	      double c2Max);


void updateC2DDelta(unsigned int *seed,
		    int nTry,
		    int *nAccept,
		    double epsilon,
		    double *c2,
		    double *Delta,
		    int Q,
		    int G,
		    const int *S,
		    const double *x,
		    const int *psi,
		    const double *nu,
		    const int *delta,
		    const double *r,
		    const double *sigma2,
		    const double *phi,
		    const double *tau2R,
		    const double *b,
		    double c2Max);


void updateGamma2(unsigned int *seed,
		  int *nAccept,
		  double *gamma2,
		  int Q,
		  int G,
		  const double *nu,
		  const double *rho,
		  const double *sigma2,
		  const double *tau2Rho,
		  const double *a);


void updateGamma2Nu(unsigned int *seed,
		    int nTry,
		    int *nAccept,
		    double epsilon,
		    double *gamma2,
		    double *nu,
		    int Q,
		    int G,
		    const int *S,
		    const double *x,
		    const int *psi,
		    const int *delta,
		    const double *Delta,
		    const double *rho,
		    const double *sigma2,
		    const double *phi,
		    const double *tau2Rho,
		    const double *a);


void updateRDDelta(unsigned int *seed,
		   int nTry,
		   int *nAccept,
		   double epsilon,
		   double *r,
		   double *Delta,
		   int Q,
		   int G,
		   const int *S,
		   const double *x,
		   const int *psi,
		   const double *nu,
		   const int *delta,
		   double c2,
		   const double *sigma2,
		   const double *phi,
		   const double *tau2R,
		   const double *b,
		   double nuR);


void updateRC2(unsigned int *seed,
	       int nTry,
	       int *nAccept,
	       double epsilon,
	       double *r,
	       double *c2,
	       int Q,
	       int G,
	       const int *delta,
	       const double *Delta,
	       const double *sigma2,
	       const double *tau2R,
	       const double *b,
	       double nuR,
	       double c2Max);


void updateRhoNu(unsigned int *seed,
		 int nTry,
		 int *nAccept,
		 double epsilon,
		 double *rho,
		 double *nu,
		 int Q,
		 int G,
		 const int *S,
		 const double *x,
		 const int *psi,
		 const int *delta,
		 const double *Delta,
		 double gamma2,
		 const double *sigma2,
		 const double *phi,
		 const double *tau2Rho,
		 const double *a,
		 double nuRho);


void updateRhoGamma2(unsigned int *seed,
		     int nTry,
		     int *nAccept,
		     double epsilon,
		     double *rho,
		     double *gamma2,
		     int Q,
		     int G,
		     const double *nu,
		     const double *sigma2,
		     const double *tau2Rho,
		     const double *a,
		     double nuRho);


void updateSigma2(unsigned int *seed,
		  int nTry,
		  int *nAccept,
		  double epsilon,
		  double *sigma2,
		  int Q,
		  int G,
		  const int *S,
		  const double *x,
		  const int *psi,
		  const double *nu,
		  const int *delta,
		  const double *Delta,
		  double c2,
		  double gamma2,
		  const double *r,
		  const double *rho,
		  const double *phi,
		  const double *t,
		  const double *l,
		  const double *tau2R,
		  const double *tau2Rho,
		  const double *a,
		  const double *b);


void updatePhi(unsigned int *seed,
	       int nTry,
	       int *nAccept,
	       double epsilon,
	       double *phi,
	       int Q,
	       int G,
	       const int *S,
	       const double *x,
	       const int *psi,
	       const double *nu,
	       const int *delta,
	       const double *Delta,
	       const double *sigma2,
	       const double *theta,
	       const double *lambda);


void updateTheta(unsigned int *seed,
		 int nTry,
		 int *nAccept,
		 double epsilon,
		 double *theta,
		 int Q,
		 int G,
		 const double *phi,
		 const double *lambda);


void updateLambda(unsigned int *seed,
		  int nTry,
		  int *nAccept,
		  double epsilon,
		  double *lambda,
		  int Q,
		  int G,
		  const double *phi,
		  const double *theta);


void updateT(unsigned int *seed,
	     int nTry,
	     int *nAccept,
	     double epsilon,
	     double *t,
	     int Q,
	     int G,
	     const double *sigma2,
	     const double *l);


void updateL(unsigned int *seed,
	     int nTry,
	     int *nAccept,
	     double epsilon,
	     double *l,
	     int Q,
	     int G,
	     const double *sigma2,
	     const double *t);


void updateXi(unsigned int *seed,
	      int *nAccept,
	      double *xi,
	      int Q,
	      int G,
	      const int *delta,
	      double alphaXi,
	      double betaXi);


void updateXi_onedelta(unsigned int *seed,
		       int *nAccept,
		       double *xi,
		       int Q,
		       int G,
		       const int *delta,
		       double alphaXi,
		       double betaXi);


void updateDeltaDDelta(unsigned int *seed,
		       int nTry,
		       int *nAccept,
		       int *delta,
		       double *Delta,
		       int Q,
		       int G,
		       const int *S,
		       const double *x,
		       const int *psi,
		       const double *nu,
		       double c2,
		       const double *r,
		       const double *sigma2,
		       const double *phi,
		       const double *tau2R,
		       const double *xi,
		       const double *b);



void updateDeltaDDelta_onedelta(unsigned int *seed,
				int nTry,
				int *nAccept,
				int *delta,
				double *Delta,
				int Q,
				int G,
				const int *S,
				const double *x,
				const int *psi,
				const double *nu,
				double c2,
				const double *r,
				const double *sigma2,
				const double *phi,
				const double *tau2R,
				const double *xi,
				const double *b);



void updateLSigma2(unsigned int *seed,
		   int nTry,
		   int *nAccept,
		   double epsilon,
		   double *l,
		   double *sigma2,
		   int Q,
		   int G,
		   const int *S,
		   const double *x,
		   const int *psi,
		   const double *nu,
		   const int *delta,
		   const double *Delta,
		   double c2,
		   double gamma2,
		   const double *r,
		   const double *rho,
		   const double *phi,
		   const double *t,
		   const double *tau2R,
		   const double *tau2Rho,
		   const double *a,
		   const double *b);


void updateTSigma2(unsigned int *seed,
		   int nTry,
		   int *nAccept,
		   double epsilon,
		   double *t,
		   double *sigma2,
		   int Q,
		   int G,
		   const int *S,
		   const double *x,
		   const int *psi,
		   const double *nu,
		   const int *delta,
		   const double *Delta,
		   double c2,
		   double gamma2,
		   const double *r,
		   const double *rho,
		   const double *phi,
		   const double *l,
		   const double *tau2R,
		   const double *tau2Rho,
		   const double *a,
		   const double *b);


void updateLambdaPhi(unsigned int *seed,
		     int nTry,
		     int *nAccept,
		     double epsilon,
		     double *lambda,
		     double *phi,
		     int Q,
		     int G,
		     const int *S,
		     const double *x,
		     const int *psi,
		     const double *nu,
		     const int *delta,
		     const double *Delta,
		     const double *sigma2,
		     const double *theta);


void updateThetaPhi(unsigned int *seed,
		    int nTry,
		    int *nAccept,
		    double epsilon,
		    double *theta,
		    double *phi,
		    int Q,
		    int G,
		    const int *S,
		    const double *x,
		    const int *psi,
		    const double *nu,
		    const int *delta,
		    const double *Delta,
		    const double *sigma2,
		    const double *lambda);
#endif
