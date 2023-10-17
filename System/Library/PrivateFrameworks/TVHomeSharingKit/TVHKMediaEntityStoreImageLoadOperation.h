//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityStoreImageLoadOperation
{
    NSOperation *_currentSubOperation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003c4ac
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
- (id)_templateImageURLStringFromLookupResults:(id)arg1 storeID:(id)arg2;	// IMP=0x000000000003c3b5
- (void)_startImageLoadOperationWithTemplateImageURLString:(id)arg1;	// IMP=0x000000000003c105
- (void)_startLookupOperation;	// IMP=0x000000000003bd53
- (id)_mediaEntityImageLoadParams;	// IMP=0x000000000003bd41
- (void)cancel;	// IMP=0x000000000003bcc3
- (void)executionDidBegin;	// IMP=0x000000000003bcb1
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000003bbab

@end
