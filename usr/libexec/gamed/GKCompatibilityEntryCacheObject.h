//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSOrderedSet, NSString;

@interface GKCompatibilityEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x004000000015aab9
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x002000000015b0c8
- (id)internalRepresentation;	// IMP=0x001000000015aac6

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSOrderedSet *shortVersions; // @dynamic shortVersions;
@property(retain, nonatomic) NSOrderedSet *versions; // @dynamic versions;

@end

