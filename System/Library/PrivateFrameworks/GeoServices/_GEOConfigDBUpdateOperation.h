//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _GEOConfigDB;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBUpdateOperation
{
    _GEOConfigDB *_configDB;	// 16 = 0x10
    long long _rowId;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000295178
- (_Bool)performOperation;	// IMP=0x00000000002950f3
- (id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 value:(id)arg4;	// IMP=0x0000000000295019

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

