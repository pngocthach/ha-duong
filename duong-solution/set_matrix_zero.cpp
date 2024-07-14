class Solution {

	public:

		void setZeroes(vector<vector<int>>& matrix) {

			int n = matrix.size(); // row

			int m = matrix[0].size(); // col

			int row[n];

			memset(row, 0, sizeof(int) * n);

			int col[m];

			memset(col, 0, sizeof(int) * m);

			for(int i = 0; i < n; i++) {

				for(int j = 0; j < m; j++) {

					if(matrix[i][j] == 0) {

						row[i] = 1;

						col[j] = 1;

					}

				}

			}

			for(int i = 0; i < n; i++) {

				for(int j = 0; j < m; j++) {

					if(row[i] == 1|| col[j] == 1) {

						matrix[i][j] = 0;

					}

				}

			}



		}

};
