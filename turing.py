import random

print("Turing Test Chatbot (type 'exit' to quit)")

while True:
    text = input("User: ").lower()

    if text == "exit":
        break

    elif "hello" in text or "hi" in text:
        print("Bot: Hello! Nice to talk with you.")

    elif "how are you" in text:
        print("Bot: I am doing well. How about you?")

    elif "name" in text:
        print("Bot: I am a simple AI chatbot.")

    elif "ai" in text:
        print("Bot: AI means Artificial Intelligence.")

    elif "weather" in text:
        print("Bot: The weather seems nice today.")

    elif "study" in text or "college" in text:
        print("Bot: Studying is important for learning new things.")

    elif "bye" in text:
        print("Bot: Goodbye! Have a nice day.")
        break

    else:
        replies = [
            "That sounds interesting.",
            "Can you tell me more?",
            "I see.",
            "Why do you think that?",
            "That's a good point."
        ]
        print("Bot:", random.choice(replies))