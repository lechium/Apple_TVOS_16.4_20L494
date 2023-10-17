//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPMediaItem;

__attribute__((visibility("hidden")))
@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation
{
    MPMediaItem *_mediaItem;	// 8 = 0x8
    long long _keepLocal;	// 16 = 0x10
    unsigned long long _keepLocalConstraints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a8bd3
@property(nonatomic) unsigned long long keepLocalConstraints; // @synthesize keepLocalConstraints=_keepLocalConstraints;
@property(nonatomic) long long keepLocal; // @synthesize keepLocal=_keepLocal;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)execute;	// IMP=0x00000000002a8a44

@end

