#include "BaseScene.h"
#include "SceneManager.h"

BaseScene::BaseScene(SceneManager* manager_)
{
	sceneManager_ = manager_;
}

BaseScene::~BaseScene()
{
}

void BaseScene::Init(void)
{
}

void BaseScene::Update(void)
{
}

void BaseScene::Draw(void)
{
}

void BaseScene::Release(void)
{
}

SceneManager* BaseScene::GetSceneManager(void)
{
	return sceneManager_;
}
