//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODefaultsDBCollection, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultsDBValue : NSObject
{
    GEODefaultsDBCollection *_parent;	// 8 = 0x8
    long long _dbId;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    id _value;	// 32 = 0x20
}

+ (id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3;	// IMP=0x006000000028f952
- (void).cxx_destruct;	// IMP=0x000000000028fa47
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak GEODefaultsDBCollection *parent; // @synthesize parent=_parent;
@property(nonatomic) long long dbId; // @synthesize dbId=_dbId;
- (id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3;	// IMP=0x000000000028f8a0

@end
