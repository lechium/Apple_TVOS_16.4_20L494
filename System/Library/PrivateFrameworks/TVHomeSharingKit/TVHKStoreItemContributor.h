//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKStoreItemContributor : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _storeID;	// 16 = 0x10
    NSString *_templateImageURLString;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00600000000858c6
- (void).cxx_destruct;	// IMP=0x0000000000085f15
@property(readonly, copy, nonatomic) NSString *templateImageURLString; // @synthesize templateImageURLString=_templateImageURLString;
@property(readonly, nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000085def
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000085b7d
- (unsigned long long)hash;	// IMP=0x0000000000085a89
- (id)_initWithName:(id)arg1 storeID:(unsigned long long)arg2 templateImageURLString:(id)arg3;	// IMP=0x0000000000085964
- (id)init;	// IMP=0x00000000000858f5

@end

