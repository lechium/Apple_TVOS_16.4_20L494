//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPAVMetadataItemImageLoader : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006d26
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)cancelLoad:(id)arg1;	// IMP=0x0000000000006d07
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000068c6
- (id)imageKeyForObject:(id)arg1;	// IMP=0x00000000000068b4
- (id)init;	// IMP=0x0000000000006820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

