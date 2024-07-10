# Package Design Document for TlmChan

The following is the package design document (pdd) for `TlmPacketizer`, developed by Ali Mosallaei. 

## Description

F Prime package for sending telemetry as packets. This abstracts away the current implementation in F Prime, where you comment out and configure your project to use either packets or channels for telemetry. 

# Subtopologies

This package provides some subtopologies to be utilized within your project.

| Subtopology name | Link to sdd   |
| ---------------- | ------------- |
| Telemetry    | [Telemetry/docs/sdd.md](../Telemetry/docs/sdd.md) |

# Config objects

This package provides some files that can be configured by running `fppm config --generate mosallaei/TlmPacketizer`.

| Path to config object | Description                    |
| --------------------- | ------------------------------ |
| {{cookiecutter.main_top}}Packets.xml | Packet spec file for the deployment that uses this package  |
| Telemetry.fpp   | The subtopology. Configuration is to add the name of the main deployment topology. |
| {{cookiecutter.td_name}}TopologyDefs.hpp   | The topology definitions file that needs to be moved into the main deployment `Top/` folder. |

Note that since `Telemetry.fpp` is a config object, it is not linked in the CMake source list. Once configured and the output files are obtained, remember to add `Telemetry.fpp` to a CMake source list.