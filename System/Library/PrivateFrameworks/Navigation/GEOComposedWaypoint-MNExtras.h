//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedWaypoint.h>

@interface GEOComposedWaypoint (MNExtras)
+ (id)appleParkWaypointFromLatLng;	// IMP=0x002000000004f133
+ (id)appleParkWaypointFromAddress;	// IMP=0x002000000004f0c0
+ (id)appleParkWaypointFromMuid;	// IMP=0x002000000004f04d
- (id)humanDescriptionWithAddressAndLatLng;	// IMP=0x001000000004cfa3
- (id)humanDescriptionWithLatLng;	// IMP=0x001000000004ce72
- (id)humanDescription;	// IMP=0x001000000004cd54
- (id)navAnnouncementAddressAndSubstituteType:(int *)arg1;	// IMP=0x001000000004cbcf
- (id)navAnnouncementAddress;	// IMP=0x001000000004cbbb
- (id)navAnnouncementNameAndSubstituteType:(int *)arg1;	// IMP=0x001000000004ca12
- (id)navAnnouncementName;	// IMP=0x001000000004c9fe
- (id)localeIdentifier;	// IMP=0x001000000004c93c
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1 substituteType:(int *)arg2;	// IMP=0x001000000004c88f
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1;	// IMP=0x001000000004c840
- (id)navDisplayNameAndSubstituteType:(int *)arg1;	// IMP=0x001000000004c7be
- (id)navDisplayAddressAndSubstituteType:(int *)arg1;	// IMP=0x001000000004c771
- (id)navDisplayName;	// IMP=0x001000000004c758
- (id)navDisplayAddress;	// IMP=0x001000000004c6d7
- (id)directionsListAddress;	// IMP=0x001000000004c62b
@property(readonly, nonatomic) int waypointCategory;
@end

