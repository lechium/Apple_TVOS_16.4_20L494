//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface TVNPDataImageLoader : NSObject
{
    MISSING_TYPE *_decodedImage;	// 8 = 0x8
    NSString *_imageIdentifier;	// 16 = 0x10
    NSData *_imageData;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000019130
- (void).cxx_destruct;	// IMP=0x00200000000199c0
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (void)cancelLoad:(id)arg1;	// IMP=0x0010000000019940
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000194f0
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0010000000019490
- (id)init;	// IMP=0x0010000000019220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

