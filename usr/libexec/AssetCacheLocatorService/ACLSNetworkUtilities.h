//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACLSNetworkUtilities : NSObject
{
}

+ (_Bool)areDigestedIdentifiers:(id)arg1 equalToCleartextIdentifiers:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0040000000006979
+ (_Bool)isDigestedIdentifier:(id)arg1 equalToCleartextIdentifier:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000006613
+ (id)digestIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x0010000000006425
+ (id)digestIdentifier:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000000615b
+ (_Bool)makeLocalAddresses:(id *)arg1 andGatewayIdentifiers:(id *)arg2 tag:(unsigned int)arg3;	// IMP=0x0010000000004b20
+ (id)stringFromSockaddrStorage:(const struct sockaddr_storage *)arg1;	// IMP=0x0010000000004ab2
+ (id)stringFromSockaddrDL:(const struct sockaddr_dl *)arg1;	// IMP=0x001000000000497c
+ (id)stringFromSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x0010000000004966
+ (id)stringFromSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004950
+ (id)stringFromMacAddr:(char *)arg1;	// IMP=0x0010000000004902
+ (id)stringFromInaddr6:(const struct in6_addr *)arg1;	// IMP=0x001000000000487a
+ (id)stringFromInaddr4:(const struct in_addr *)arg1;	// IMP=0x00100000000047fa
+ (id)serviceIDFromKey:(id)arg1;	// IMP=0x0010000000004701
+ (_Bool)isWiredNetworkInterfaceType:(id)arg1;	// IMP=0x001000000000462f
+ (_Bool)isAutomaticConfigMethod6:(id)arg1;	// IMP=0x0010000000004610
+ (_Bool)isAutomaticConfigMethod4:(id)arg1;	// IMP=0x0010000000004550
+ (_Bool)isManualConfigMethod6:(id)arg1;	// IMP=0x0010000000004531
+ (_Bool)isManualConfigMethod4:(id)arg1;	// IMP=0x0010000000004512
+ (_Bool)isUsefulInaddr6:(const struct in6_addr *)arg1;	// IMP=0x00100000000044c7
+ (_Bool)isUsefulInaddr4:(const struct in_addr *)arg1;	// IMP=0x00100000000044a5
+ (_Bool)isUsefulSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x001000000000448f
+ (_Bool)isUsefulSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0010000000004479
+ (_Bool)isShareableInaddr6:(const struct in6_addr *)arg1;	// IMP=0x0010000000004446
+ (_Bool)isShareableInaddr4:(const struct in_addr *)arg1;	// IMP=0x0010000000004413
+ (_Bool)isShareableSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x00100000000043fd
+ (_Bool)isShareableSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x00100000000043e7
+ (id)createNetworkInterface:(struct __SCNetworkInterface *)arg1 service:(struct __SCNetworkService *)arg2 configInfo:(id)arg3;	// IMP=0x0010000000003def
+ (double)speedFromEthernetMediaSubType:(id)arg1;	// IMP=0x0010000000003d5e
+ (id)allActiveNetworkInterfaces;	// IMP=0x0010000000002ba1
+ (id)netmask4ContainingStartAddress:(id)arg1 endAddress:(id)arg2;	// IMP=0x0010000000002a5a
+ (_Bool)hasUsefulUSBEthernetInterface;	// IMP=0x00100000000028c0

@end

