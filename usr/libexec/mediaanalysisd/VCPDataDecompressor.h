//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface VCPDataDecompressor : NSObject
{
    NSMutableData *_scratchData;	// 8 = 0x8
    NSMutableData *_resultData;	// 16 = 0x10
}

+ (id)decompressor;	// IMP=0x0040000000076965
- (void).cxx_destruct;	// IMP=0x0020000000076a83
- (id)decompressData:(id)arg1;	// IMP=0x001000000007697f
- (id)init;	// IMP=0x00100000000768ae

@end

