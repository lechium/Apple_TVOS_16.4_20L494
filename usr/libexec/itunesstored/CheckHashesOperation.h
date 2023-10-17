//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSString;

@interface CheckHashesOperation : ISOperation
{
    long long _bytesToHash;	// 96 = 0x60
    NSString *_filePath;	// 104 = 0x68
    NSArray *_hashes;	// 112 = 0x70
}

- (void)run;	// IMP=0x002000000010d11d
@property(readonly) long long numberOfBytesToHash;
@property(readonly) NSArray *hashes;
@property(readonly) NSString *filePath;
- (void)dealloc;	// IMP=0x001000000010d078
- (id)initWithFilePath:(id)arg1 hashes:(id)arg2 bytesToHash:(long long)arg3;	// IMP=0x001000000010cfe2

@end

