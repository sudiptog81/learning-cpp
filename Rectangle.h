class Rectangle
{
  public:
    Rectangle(int width, int height);
    ~Rectangle();
    int getHeight() const;
    int getWidth() const;
    int getArea() const;
    int getPerimeter() const;
    void setSize(int newWidth, int newHeight);

  private:
    int _width;
    int _height;
};

Rectangle::Rectangle(int width, int height)
{
    _width = width;
    _height = height;
};

Rectangle::~Rectangle(){};

int Rectangle::getHeight() const
{
    return _height;
};

int Rectangle::getWidth() const
{
    return _width;
};

int Rectangle::getArea() const
{
    return _height * _width;
};

int Rectangle::getPerimeter() const
{
    return 2 * _height + 2 * _width;
};

void Rectangle::setSize(int newWidth, int newHeight)
{
    _width = newWidth;
    _height = newHeight;
};