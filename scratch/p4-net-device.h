#ifndef NS4_NS4_MODEL_H_H
#define NS4_NS4_MODEL_H_H
#include "p4-model.h"
#include <bm/bm_sim/switch.h>
#include <ns3/bridge-net-device.h>
#include <ns3/net-device.h>
#include <ns3/ptr.h>
#include <ns3/mac48-address.h>
#include "ns3/object.h"
#include "ns3/packet.h"

using namespace ns3;

class P4NetDevice :public BridgeNetDevice{
public:
	P4NetDevice();
	void ReceiveFromDevice (Ptr<NetDevice> device, Ptr<const ns3::Packet> packet, uint16_t protocol,
	                          Address const &source, Address const &destination, PacketType packetType);

private:
	P4Model* p4Model ;
	int GetPortNumber(Ptr<NetDevice>);
};


#endif
