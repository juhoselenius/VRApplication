using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/*
 * @Author: Juho Selenius
 * With the help of "Smooth Scene Fade Transition in VR"
 * by Valem Tutorials (https://www.youtube.com/watch?v=JCyJ26cIM0Y).
 */

public class LevelChanger : MonoBehaviour
{
    public ScreenFader screenFader;

    public void GoToScene(int levelIndex)
    {
        StartCoroutine(GoToSceneRoutine(levelIndex));
    }
    
    IEnumerator GoToSceneRoutine(int levelIndex)
    {
        screenFader.FadeOut();
        yield return new WaitForSeconds(screenFader.fadeDuration);

        GameManager.manager.counter = 0;
        SceneManager.LoadScene("Level" + levelIndex);
    }
}
