//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNKeyValueMutation : NSObject
{
    int _type;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027598
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027234
- (unsigned long long)hash;	// IMP=0x00000000000270ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026f45
- (id)init;	// IMP=0x0000000000026efc

@end

