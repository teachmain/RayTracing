#ifndef	FSTREAM	
	#include<fstream>
	#define FSTREAM
#endif
#ifndef COLOR
	#include"color.hpp"
	#define COLOR
#endif

int ppmOutput(char *filename, const int width, const int height, color **matrix){
	std::ofstream fout(filename);
	if(fout.is_open()){
		fout << "P6\n" << width << ' ' << height << "\n255\n";
		for(int i=0;i<width;i++){
			for(int j=0;j<height;j++){
				int ir = (int) matrix[i][j].R * 256;
				int ig = (int) matrix[i][j].G * 256;
				int ib = (int) matrix[i][j].B * 256;
				ir = ir>256?256:ir;
				ig = ig>256?256:ig;
				ib = ib>256?256:ib;
				fout << (char)ir << (char)ig << (char)ib ;
			}
		}
		fout.close();
	}
}
				
				
