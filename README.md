## VampyrUproject

4.15 Unreal project for modding Vampyr. This project includes dummied implementations of DONTNOD-proprietary asset formats to allow for retaining inverse kinematics and facial animation on modded characters.

### Getting Started

Clone this repository, open the .uproject, and compile the necessary modules once prompted. When complete, the Unreal editor will open.

Support for compiling the project will not be provided as documentation is widely accessible elsewhere.

### BipedIKRig/FacialRig

This project does not allow the creation or modification of BipedIKRig/FacialRig assets. Instead, it allows you to create placeholder assets in your project so that your modified skeletal meshes retain the necessary references to utilize features present on the originals. **You should ***NOT*** package these placeholders with your mods!**

<details>
  <summary>Tutorial</summary>
  
  To create placeholder BipedIKRig/FacialRig assets, right-click in the content browser and create a **Data Asset**, organized under Miscellaneous. From the class selection window, choose **DNEAnimBipedIKRig** or **DNEAnimFacialRig**. Name and place it according to the BipedIKRig/FacialRig asset(s) you wish to reference.
  
  To configure your skeletal mesh to reference these placeholder assets, open your mesh and navigate to Asset User Data, creating and configuring the necessary elements. You can find the settings utilized by original skeletal meshes by opening them in [FModel](https://github.com/4sval/FModel). For example, these are the settings for **CH_Hero_VampYr02** (yes, that includes the empty slots):
  
  ![](https://i.imgur.com/VSBpk3D.png)
  
</details>
