# Multi-threaded INET Framework for V2X Communications

This is multi-threaded version of INET Framework. Our implementation is able to reduce the simulation time, ensuring seamless integration with the existing scenarios of a user. Our code is based on the legacy INET Framework and it has been modified accordingly. The INET Framework is an open-source suite for wired, wireless, and mobile networks.

# Multithread Versions 3.6.4 and 4.0
Two different versions of the multithreaded INET framework are provided. The first one is based on ver. 3.6.4-394571f (multithreaded_inet_3.6.4). The second one, is based on ver. 4.0-576b2dc (multithreaded_inet_4.0). Both versions provide the same functionality described above. Either one can be chosen based on the versions of OMNeT++, Veins, and SUMO that will be used.

For our research purposes, we modified the functions below:
* *visitObject* in the *PhysicalEnvironment* class.
* *visit* in the *DielectricObstacleLoss* class.

We also introduced the notion of the *distanceBoundary* under within the *ScalarAnalogueModel* class.\
For further details about our modifications, please refer to our paper https://github.com/v2x-dev/multithread-inet/blob/master/ieeevnc2018.pdf and our poster https://github.com/v2x-dev/multithread-inet/blob/master/poster_ieeevnc2018.pdf.

# Licence
This code is freely available under the GNU General Public License v3.0, found in the [LICENCE](https://github.com/v2x-dev/multithread-inet/blob/master/LICENSE) file.\
If this code is used for drafting a manuscript, all we ask is to cite the following papers:
```    
@INPROCEEDINGS{multithreadedINET,
        author={I. Mavromatis and A. Tassi and R. J. Piechocki and A. Nix},
        title = {{Parallel Implementation of the OMNeT++ INET Framework for V2X Communications}},
        booktitle={Proc. of IEEE Vehicular Networking Conference (VNC) 2018},
        year = 2018,
        month = {Dec},
}
@INPROCEEDINGS{fullStackV2X,
        author={I. Mavromatis and A. Tassi and R. J. Piechocki and A. Nix},
        booktitle={2017 IEEE Vehicular Networking Conference (VNC)},
        title={{Agile Calibration Process of Full-Stack Simulation Frameworks for V2X Communications}},
        year={2017},
        doi={10.1109/VNC.2017.8275604},
        ISSN={2157-9865},
        month={Nov},
}
```

# Requirements

The code is compatible with Linux (Ubuntu 16.04 LTS) and OS X 10.12 and 10.13.
The version 3.6.4, is compatible with OMNeT++ 5.2.1 and Veins 4.6. The SUMO Traffic Generator (ver. 0.30.0) is required to generate the vehicle routes. The version 4.0 is compatible with OMNeT++ 5.4.1 and Veins 5 alpha 1. The SUMO ver. 1.0.1 is required for that case. All the above tools should be pre-installed. Please refer to the links below for detailed guides of how to install them.

For information about how to use Veins with INET and OMNeT++, please refer to Veins_INET sub-module ([website](http://veins.car2x.org/documentation/modules/)).

# How to Use it
1. Our *Multi-threaded INET* project should be imported in OMNeT++. For more information, please refer to OMNeT++ Documententation.
    - Ensure that no other version of the INET Framework is opened in OMNeT++.
2. The *Multi-threaded INET* project should be later compiled (Build Project in OMNeT++).
3. Veins and Veins_INET projects should be imported in OMNeT++ and compiled as well.
4. At the omnetpp.ini, please add the following lines:
```
Scenario.physicalEnvironment.numberOfThreads = 4
Scenario.radioMedium.analogModel.distanceBoundary = 1000
```
5. The *Scenario* is the name of the network to be simulated in OMNeT++. The *numberOfThreads* can be modified accordingly to the machine used (please refer to our paper for more information and the difference in the performance introduced). Finally, the *distanceBoundary* can be modified with regard the scenario and the granularity required from the user.

# Useful Links
More information about Veins vehicular network simulation framework can be found in [Veins website](http://veins.car2x.org/).\
More information about the INET Framework can be found in [INET Framework's website](https://inet.omnetpp.org/).\
More information about OMNeT++ can be found in [OMNeT++ website](https://omnetpp.org/) and under the [documentation](https://omnetpp.org/documentation) page.\
More information about SUMO Traffic Genetator can be found in [SUMO's website](https://www.dlr.de/ts/en/desktopdefault.aspx/tabid-9883/16931_read-41000/).
