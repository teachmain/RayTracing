class color{
	public:
	double R;
	double G;
	double B;
	color();
	color(double R, double G, double B){
		this->R = R;
		this->G = G;
		this->B = B;
	}
	void setColor(double R, double G, double B){
		this->R = R;
		this->G = G;
		this->B = B;
	}
};
