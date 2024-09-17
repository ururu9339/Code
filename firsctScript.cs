//Very important file to me my first script on c# for simple controls when i first started learnin unity 
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    [SerializeField] private float speed;
    [SerializeField] private float jumpspeed;
    private Rigidbody2D body;

    private void Awake()
        {
            body = GetComponent<Rigidbody2D>();
        }
 
    private void Update()
        {
            float horizontalInput = Input.GetAxis("Horizontal");
            body.velocity = new Vector2(horizontalInput * speed, body.velocity.y);//going left or right

            //flips character when turning
            if (horizontalInput > 0.01f)
                transform.localScale = new Vector3(4, 4, 1);
            else if (horizontalInput < -0.01f)
                transform.localScale = new Vector3(-4, 4, 1);
            
            if(Input.GetKey(KeyCode.Space)) //jumping
                body.velocity = new Vector2(body.velocity.x, jumpspeed);
        }


}
