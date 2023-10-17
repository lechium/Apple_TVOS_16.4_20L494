//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSLocale, NSSet, NSString, NSURL, SFRequestParameters;

@protocol SFLSRProtocol
- (oneway void)trainAppLmFromNgramCountsArtifact:(NSURL *)arg1 language:(NSString *)arg2 writeToDirectory:(NSURL *)arg3 sandboxExtensions:(NSArray *)arg4 completion:(void (^)(NSURL *, NSURL *))arg5;
- (oneway void)createNgramCountsArtifactFromPhraseCountArtifact:(NSURL *)arg1 writeToDirectory:(NSURL *)arg2 sandboxExtensions:(NSArray *)arg3 completion:(void (^)(NSURL *))arg4;
- (oneway void)createPhraseCountsArtifactWithIdentifier:(NSString *)arg1 rawPhraseCountsPath:(NSURL *)arg2 customPronunciationsPath:(NSURL *)arg3 writeToDirectory:(NSURL *)arg4 sandboxExtensions:(NSArray *)arg5 completion:(void (^)(NSURL *))arg6;
- (oneway void)trainAppLmFromNgramsSerializedData:(NSData *)arg1 customPronsData:(NSData *)arg2 language:(NSString *)arg3 writeToDirectory:(NSURL *)arg4 sandboxExtension:(NSString *)arg5 completion:(void (^)(NSURL *, NSURL *))arg6;
- (oneway void)wakeUpWithCompletion:(void (^)(void))arg1;
- (oneway void)metricsWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)lmeThresholdWithCompletion:(void (^)(long long))arg1;
- (oneway void)deserializeNgramCountsData:(NSData *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (oneway void)generateNgramCountsSerializeDataWithCompletion:(void (^)(NSData *))arg1;
- (oneway void)trainFromPlainTextAndWriteToDirectory:(NSURL *)arg1 sandboxExtension:(NSString *)arg2 completion:(void (^)(NSURL *, NSURL *))arg3;
- (oneway void)oovWordsAndFrequenciesWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)addProns:(NSSet *)arg1 forWord:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (oneway void)addSentenceToNgramCounts:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)addSentenceToNgramCounts:(NSString *)arg1;
- (oneway void)initializeLmWithAssetPath:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)initializeLmWithLocale:(NSLocale *)arg1 completion:(void (^)(NSError *))arg2;
- (void)promoteAssets;
- (void)setAssetsAsProvisional;
- (oneway void)purgeAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)configParametersForVoicemailWithLanguage:(NSString *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)downloadAssetsForLanguage:(NSString *)arg1 urgent:(_Bool)arg2 forceUpgrade:(_Bool)arg3 detailedProgress:(_Bool)arg4;
- (void)logCoreAnalyticsEvent:(NSString *)arg1 withAnalytics:(NSDictionary *)arg2;
- (void)initializeWithSandboxExtensions:(NSArray *)arg1;
- (oneway void)installedLanguagesWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)preloadRecognizerForLanguage:(NSString *)arg1 task:(NSString *)arg2 recognitionOverrides:(NSDictionary *)arg3 modelOverrideURL:(NSURL *)arg4 completion:(void (^)(NSError *))arg5;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)cancelSpeech;
- (oneway void)stopSpeech;
- (oneway void)startRecordedAudioDictationWithParameters:(SFRequestParameters *)arg1;
@end

