//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class ExternalDownloadManifest, NSOrderedSet, NSURLRequest, SSDownloadManifestResponse;

@interface LoadExternalDownloadManifestOperation : ISOperation
{
    NSOrderedSet *_downloadIDs;	// 96 = 0x60
    ExternalDownloadManifest *_manifest;	// 104 = 0x68
    long long _manifestFormat;	// 112 = 0x70
    _Bool _shouldHideUserPrompts;	// 120 = 0x78
    NSURLRequest *_urlRequest;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000007943c
- (void)_showDialogForError:(id)arg1;	// IMP=0x001000000007908e
- (_Bool)_showConfirmationPromptForManifest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000078a13
- (_Bool)_runForPurchaseFormatWithURLRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007820f
- (_Bool)_runForPublicFormatWithURLRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000077d16
- (void)_processValidDownloads:(id)arg1;	// IMP=0x0010000000077611
- (_Bool)_handlePublicResponseForOperation:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000770e6
- (void)run;	// IMP=0x0010000000076a19
@property(copy) NSURLRequest *URLRequest;
@property _Bool shouldHideUserPrompts;
@property long long manifestFormat;
@property(readonly) SSDownloadManifestResponse *manifestResponse;
@property(readonly) ExternalDownloadManifest *manifest;
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000000764b0

@end

