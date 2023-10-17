//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IDSCKModifyRecordZonesOperation
{
    NSArray *_recordZonesToSave;	// 8 = 0x8
    NSArray *_recordZoneIDsToDelete;	// 16 = 0x10
    CDUnknownBlockType _modifyRecordZonesCompletionBlock;	// 24 = 0x18
    long long _qualityOfService;	// 32 = 0x20
}

+ (id)alloc;	// IMP=0x00600000000a8c62
+ (Class)__class;	// IMP=0x00600000000a8c12
- (void).cxx_destruct;	// IMP=0x00000000000a8d04
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordZonesCompletionBlock; // @synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(copy, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;

@end

