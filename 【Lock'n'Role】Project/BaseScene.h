#pragma once
class SceneManager;

class BaseScene
{
public:

	BaseScene(SceneManager* manager_);
	~BaseScene();

	virtual void Init(void);
	virtual void Update(void);
	virtual void Draw(void);
	virtual void Release(void);

	SceneManager* GetSceneManager(void);

protected:
	SceneManager* sceneManager_;
};