class Engine
{
public:
	Engine();
	void run();
	void onDraw();
	bool getIsRunning() { return _isRunning; }
private:
	void setIsRunning(bool* value) { _isRunning = value; }
	bool _isRunning;
};
