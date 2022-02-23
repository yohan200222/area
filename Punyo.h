class Punto{
	private:
		int x,y;
	public:
		Punto(int _x,int _y){
			x= _x;
			y= _y;
		}
		Punto(){
			x=y=0;
		}
		void setX( int valorX);    //establecemos el valor de x
		void setY( int valorY);    //establecemos el valor y
		int getX();                //Obtener el valor de x
		int getY();                //Obtener el valor de y
};
