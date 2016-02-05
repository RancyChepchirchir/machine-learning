// Filename: 	matrix.h
// Author: 		Christopher Goes
// Course: 		CS 404 Machine Learning and Data Mining
// Semester: 	Spring 2016
// Description:	Matrix class declarations

class Matrix {
	public:
		Matrix( int rows, int cols );
		Matrix( Matrix * initMat );
		~Matrix();
		
		initByRow( double * x, int rows );
		initByCol( double * y, int cols );
		
		void multiply( double scalar );
		Matrix * multiply( Matrix * mat );
		void add( double scalar );
		void add( Matrix * mat );
		void transpose();
		
				
		double * getRow( int row );
		double * getCol( int col );
		double getValue( int row, int col );
		void setRowToVec( double * x, int row );
		void setColToVec( double * y, int col );
		int getNumRows();
		int getNumCols();
		
		void printAll();
		void printRow( int row );
		void printCol( int col );
		
	private:
		double ** data;
		int numRows;
		int numCols;
		
}