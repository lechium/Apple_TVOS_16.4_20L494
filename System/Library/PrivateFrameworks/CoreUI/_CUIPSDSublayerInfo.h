//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIPSDSublayerInfo : NSObject
{
    unsigned int _numOfSublayers;	// 8 = 0x8
}

+ (id)newWithSublayerCount:(unsigned int)arg1 indexSet:(id)arg2;	// IMP=0x006000000002be4f
- (unsigned int)sublayerAtIndex:(unsigned int)arg1 isValid:(_Bool *)arg2;	// IMP=0x000000000002bf70
- (unsigned int)numberOfSublayers;	// IMP=0x000000000002bf67

@end

