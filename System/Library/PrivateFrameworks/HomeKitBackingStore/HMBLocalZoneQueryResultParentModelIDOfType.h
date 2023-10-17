//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultParentModelIDOfType
{
    int _parentModelIDOffset;	// 40 = 0x28
    int _modelClassNameOffset;	// 44 = 0x2c
    NSUUID *_parentModelID;	// 48 = 0x30
    NSString *_modelClassName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000054f5e
@property(readonly, nonatomic) NSString *modelClassName; // @synthesize modelClassName=_modelClassName;
@property(readonly, nonatomic) int modelClassNameOffset; // @synthesize modelClassNameOffset=_modelClassNameOffset;
@property(readonly, nonatomic) NSUUID *parentModelID; // @synthesize parentModelID=_parentModelID;
@property(readonly, nonatomic) int parentModelIDOffset; // @synthesize parentModelIDOffset=_parentModelIDOffset;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x0000000000054e06
- (id)initWithLocalZone:(id)arg1 parentModelID:(id)arg2 modelClassName:(id)arg3;	// IMP=0x0000000000054bc3

@end

