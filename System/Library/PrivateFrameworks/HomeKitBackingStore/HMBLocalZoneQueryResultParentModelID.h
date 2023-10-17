//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultParentModelID
{
    int _parentModelIDOffset;	// 40 = 0x28
    NSUUID *_parentModelID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000054bb0
@property(readonly, nonatomic) NSUUID *parentModelID; // @synthesize parentModelID=_parentModelID;
@property(readonly, nonatomic) int parentModelIDOffset; // @synthesize parentModelIDOffset=_parentModelIDOffset;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x0000000000054ac9
- (id)initWithLocalZone:(id)arg1 parentModelID:(id)arg2;	// IMP=0x0000000000054953

@end

