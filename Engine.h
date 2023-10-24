class Engine
{
public:
	Engine();
	void Run();
	void Start();
	bool getIsRunning() { return _isRunning; }
private:
	void setIsRunning(bool* value) { _isRunning = value; }
	bool _isRunning;
};
