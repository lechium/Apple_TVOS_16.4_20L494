//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLIndexedConstantValue : NSObject
{
    unsigned long long _index;	// 8 = 0x8
    unsigned long long _dataType;	// 16 = 0x10
    char *_data;	// 24 = 0x18
}

@property(readonly) void *data; // @synthesize data=_data;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) unsigned long long index; // @synthesize index=_index;
- (id)description;	// IMP=0x000000000005ba4c
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000005b8e3
- (id)describe;	// IMP=0x000000000005b856
- (void)dealloc;	// IMP=0x000000000005b80f
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3;	// IMP=0x000000000005b791

@end
