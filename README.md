## What is this?

An iOS app to measure memory-level parallelism on iOS

Inspired by the blog post:

 - Measuring the memory-level parallelism of a system using a small C++ program? https://lemire.me/blog/2018/11/05/measuring-the-memory-level-parallelism-of-a-system-using-a-small-c-program/

The app. was initially designed by Benoît Maison.

## Requirements

- A recent mac with Xcode installed
- A recent iOS device


## Usage

- Open MemoryLanes.xcodeproj in Xcode (macOS) 
- Click on the "MemoryLanes" project within Xcode, go to "Identity" and select a valid account under "Team".
- Plug your device (e.g., iPhone) in your mac.
- In Xcode, go to Window > Devices. This will open a new window. You should see your device in this new window. Don't lose this new window.
- In Xcode, go to Product > Build For > Running
- You should see in Xcode under Products "MemoryLanes.app", drag and drop it into the "Devices" window we opened previously.
- You should now see the app on your device. By default, iOS won't let you run it, so go under Settings > General. You will find a setting there to allow you to run the app.
- Run the app, be patient.

