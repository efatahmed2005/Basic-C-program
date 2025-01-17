# Interactive Greeting Program 🌟

## 📜 Code:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Interactive Greeting</title>
    <style>
        body { font-family: Arial, sans-serif; text-align: center; background-color: #f4f4f4; padding: 20px; }
        .container { background: white; padding: 20px; border-radius: 10px; box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1); max-width: 400px; margin: auto; }
        input, button { margin-top: 10px; padding: 10px; font-size: 16px; }
        button { cursor: pointer; background: #007bff; color: white; border: none; border-radius: 5px; }
        button:hover { background: #0056b3; }
        .hidden { display: none; }
        .response { font-weight: bold; margin-top: 20px; }
    </style>
</head>
<body>
    <div class="container">
        <h1>Hey, I am Efat. What's your name?</h1>
        <input type="text" id="nameInput" placeholder="Enter your name">
        <button onclick="askInterest()">Submit</button>
        
        <div id="questionSection" class="hidden">
            <p id="greetingText"></p>
            <p>Are you interested to see my codes?</p>
            <button onclick="showResponse(1)">Yes</button>
            <button onclick="showResponse(2)">No</button>
        </div>

        <p id="responseText" class="response"></p>
    </div>

    <script>
        function askInterest() {
            let name = document.getElementById("nameInput").value.trim();
            if (name === "") {
                alert("Please enter your name.");
                return;
            }
            document.getElementById("greetingText").innerText = `Nice to meet you, ${name}!`;
            document.getElementById("questionSection").classList.remove("hidden");
        }

        function showResponse(answer) {
            let responseText = document.getElementById("responseText");
            if (answer === 1) {
                responseText.innerText = "Yeah, sure. I am glad to know it.";
            } else if (answer === 2) {
                responseText.innerText = "Oh, I hope you know all of this. Congratulations!";
            }
        }
    </script>
</body>
</html>
