//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLAutoCohortUtilities : NSObject
{
}

+ (id)computeAutoCohortMapWithStarterGraph:(id)arg1;	// IMP=0x0080000000018521
+ (_Bool)isEdgeKnownToCauseCycle:(id)arg1;	// IMP=0x008000000001823d
+ (void)markUnvettedUnsafe;	// IMP=0x008000000001821d
+ (void)markUnvettedSafe;	// IMP=0x00800000000181fd
+ (void)markUnvetted:(id)arg1;	// IMP=0x0080000000017f5e
+ (void)persistEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0080000000017ede
+ (void)writeEdge:(id)arg1 toDirectory:(id)arg2;	// IMP=0x0080000000017d46
+ (id)getUnsafeEdges;	// IMP=0x0080000000017d03
+ (id)getSafeEdges;	// IMP=0x0080000000017cc0
+ (id)getUnvettedEdges;	// IMP=0x0080000000017ca0
+ (id)readEdges:(id)arg1;	// IMP=0x0080000000017a4d
+ (id)getEdgeFilesFromDirectory:(id)arg1;	// IMP=0x0080000000017746
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0080000000017439
+ (void)applyEdges:(id)arg1 toGraph:(id)arg2;	// IMP=0x0080000000016fc7
+ (id)layerAssignmentForNode:(id)arg1 inGraph:(id)arg2 extendingLayering:(id)arg3;	// IMP=0x0080000000016d23
+ (_Bool)autoCohortingEnabled;	// IMP=0x0080000000016cfd
+ (void)enableAutoCohortingForProcessAtPath:(id)arg1;	// IMP=0x00800000000168cd

@end

