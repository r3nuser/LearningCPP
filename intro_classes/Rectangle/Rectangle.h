class Rectangle{
	private:
		int width;
		int height;
	public:
		Rectangle(int a, int b) : width(a), height(b)
		{};
		~Rectangle();
		int area();
		int getHeight();
		int getWidth();
		void setHeight(int h);
		void setWidth(int w);
};
