//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VMUFieldInfo;

__attribute__((visibility("hidden")))
@interface VMUFieldValue : NSObject
{
    VMUFieldInfo *_field;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000050a13
@property(readonly, nonatomic) unsigned long long value;
@property(readonly, nonatomic) VMUFieldInfo *field;
- (id)initWithField:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000050971

@end

