//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBagKey : NSObject
{
    NSString *_key;	// 8 = 0x8
    unsigned long long _valueType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000058bc1
@property(nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;	// IMP=0x0000000000058b80

@end

