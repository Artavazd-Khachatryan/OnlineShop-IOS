#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class OnlineshoplibraryKoin_coreKoin, OnlineshoplibraryLoadAllProductsUseCase, OnlineshoplibraryLoadAllShoppesUseCase, OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher, OnlineshoplibraryProductEntity, OnlineshoplibraryShopEntity, OnlineshoplibraryTestDataSource, OnlineshoplibraryDispatcherProvider, OnlineshoplibraryKoin_coreKoinApplicationCompanion, OnlineshoplibraryKoin_coreKoinApplication, OnlineshoplibraryKoin_coreLogger, OnlineshoplibraryKoin_coreModule, OnlineshoplibraryKotlinArray<T>, OnlineshoplibraryKoin_coreLevel, OnlineshoplibraryKoin_coreScope, OnlineshoplibraryKoin_coreParametersHolder, OnlineshoplibraryKotlinLazyThreadSafetyMode, OnlineshoplibraryKoin_coreInstanceRegistry, OnlineshoplibraryKoin_corePropertyRegistry, OnlineshoplibraryKoin_coreScopeRegistry, OnlineshoplibraryKotlinAbstractCoroutineContextElement, OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcherKey, OnlineshoplibraryKoin_coreInstanceFactory<T>, OnlineshoplibraryKotlinPair<__covariant A, __covariant B>, OnlineshoplibraryKoin_coreScopeDSL, OnlineshoplibraryKoin_coreSingleInstanceFactory<T>, OnlineshoplibraryKotlinEnumCompanion, OnlineshoplibraryKotlinEnum<E>, OnlineshoplibraryKoin_coreLockable, OnlineshoplibraryKoin_coreParametersHolderCompanion, OnlineshoplibraryKoin_coreScopeRegistryCompanion, OnlineshoplibraryKotlinAbstractCoroutineContextKey<B, E>, OnlineshoplibraryKoin_coreBeanDefinition<T>, OnlineshoplibraryKoin_coreInstanceFactoryCompanion, OnlineshoplibraryKoin_coreInstanceContext, OnlineshoplibraryKoin_coreKind, OnlineshoplibraryKoin_coreCallbacks<T>;

@protocol OnlineshoplibraryKoin_coreKoinComponent, OnlineshoplibraryPlatform, OnlineshoplibraryProductRepository, OnlineshoplibraryShopRepository, OnlineshoplibraryKoin_coreKoinScopeComponent, OnlineshoplibraryKoin_coreQualifier, OnlineshoplibraryKotlinKClass, OnlineshoplibraryKotlinLazy, OnlineshoplibraryKotlinCoroutineContextKey, OnlineshoplibraryKotlinCoroutineContextElement, OnlineshoplibraryKotlinCoroutineContext, OnlineshoplibraryKotlinContinuation, OnlineshoplibraryKotlinContinuationInterceptor, OnlineshoplibraryKotlinx_coroutines_coreRunnable, OnlineshoplibraryKotlinIterator, OnlineshoplibraryKotlinComparable, OnlineshoplibraryKoin_coreScopeCallback, OnlineshoplibraryKotlinKDeclarationContainer, OnlineshoplibraryKotlinKAnnotatedElement, OnlineshoplibraryKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface OnlineshoplibraryBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface OnlineshoplibraryBase (OnlineshoplibraryBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface OnlineshoplibraryMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface OnlineshoplibraryMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorOnlineshoplibraryKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface OnlineshoplibraryNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface OnlineshoplibraryByte : OnlineshoplibraryNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface OnlineshoplibraryUByte : OnlineshoplibraryNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface OnlineshoplibraryShort : OnlineshoplibraryNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface OnlineshoplibraryUShort : OnlineshoplibraryNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface OnlineshoplibraryInt : OnlineshoplibraryNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface OnlineshoplibraryUInt : OnlineshoplibraryNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface OnlineshoplibraryLong : OnlineshoplibraryNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface OnlineshoplibraryULong : OnlineshoplibraryNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface OnlineshoplibraryFloat : OnlineshoplibraryNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface OnlineshoplibraryDouble : OnlineshoplibraryNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface OnlineshoplibraryBoolean : OnlineshoplibraryNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol OnlineshoplibraryKoin_coreKoinComponent
@required
- (OnlineshoplibraryKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DIModelHelper")))
@interface OnlineshoplibraryDIModelHelper : OnlineshoplibraryBase <OnlineshoplibraryKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (OnlineshoplibraryLoadAllProductsUseCase *)getLoadAllProductsUseCase __attribute__((swift_name("getLoadAllProductsUseCase()")));
- (OnlineshoplibraryLoadAllShoppesUseCase *)getLoadAllShoppesUseCase __attribute__((swift_name("getLoadAllShoppesUseCase()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface OnlineshoplibraryGreeting : OnlineshoplibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol OnlineshoplibraryPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface OnlineshoplibraryIOSPlatform : OnlineshoplibraryBase <OnlineshoplibraryPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatcherProvider")))
@interface OnlineshoplibraryDispatcherProvider : OnlineshoplibraryBase
- (instancetype)initWithMain:(OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *)main io:(OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *)io __attribute__((swift_name("init(main:io:)"))) __attribute__((objc_designated_initializer));
@property (readonly) OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *io __attribute__((swift_name("io")));
@property (readonly) OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *main __attribute__((swift_name("main")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDataSource")))
@interface OnlineshoplibraryTestDataSource : OnlineshoplibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<OnlineshoplibraryProductEntity *> *productList __attribute__((swift_name("productList")));
@property (readonly) NSArray<OnlineshoplibraryShopEntity *> *shopList __attribute__((swift_name("shopList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductEntity")))
@interface OnlineshoplibraryProductEntity : OnlineshoplibraryBase
- (instancetype)initWithId:(int64_t)id shop:(int64_t)shop title:(NSString * _Nullable)title description:(NSString * _Nullable)description price:(double)price category:(NSString * _Nullable)category __attribute__((swift_name("init(id:shop:title:description:price:category:)"))) __attribute__((objc_designated_initializer));
- (OnlineshoplibraryProductEntity *)doCopyId:(int64_t)id shop:(int64_t)shop title:(NSString * _Nullable)title description:(NSString * _Nullable)description price:(double)price category:(NSString * _Nullable)category __attribute__((swift_name("doCopy(id:shop:title:description:price:category:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) int64_t shop __attribute__((swift_name("shop")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShopEntity")))
@interface OnlineshoplibraryShopEntity : OnlineshoplibraryBase
- (instancetype)initWithId:(int64_t)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description __attribute__((swift_name("init(id:name:description:)"))) __attribute__((objc_designated_initializer));
- (OnlineshoplibraryShopEntity *)doCopyId:(int64_t)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(id:name:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("ProductRepository")))
@protocol OnlineshoplibraryProductRepository
@required
- (NSArray<OnlineshoplibraryProductEntity *> *)getAllProducts __attribute__((swift_name("getAllProducts()")));
- (NSArray<OnlineshoplibraryProductEntity *> *)getProductsShopId:(int64_t)shopId __attribute__((swift_name("getProducts(shopId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkProductRepository")))
@interface OnlineshoplibraryNetworkProductRepository : OnlineshoplibraryBase <OnlineshoplibraryProductRepository>
- (instancetype)initWithDataSource:(OnlineshoplibraryTestDataSource *)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (NSArray<OnlineshoplibraryProductEntity *> *)getAllProducts __attribute__((swift_name("getAllProducts()")));
- (NSArray<OnlineshoplibraryProductEntity *> *)getProductsShopId:(int64_t)shopId __attribute__((swift_name("getProducts(shopId:)")));
@end

__attribute__((swift_name("ShopRepository")))
@protocol OnlineshoplibraryShopRepository
@required
- (NSArray<OnlineshoplibraryShopEntity *> *)getAllShops __attribute__((swift_name("getAllShops()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkShopRepository")))
@interface OnlineshoplibraryNetworkShopRepository : OnlineshoplibraryBase <OnlineshoplibraryShopRepository>
- (instancetype)initWithTestDataSource:(OnlineshoplibraryTestDataSource *)testDataSource __attribute__((swift_name("init(testDataSource:)"))) __attribute__((objc_designated_initializer));
- (NSArray<OnlineshoplibraryShopEntity *> *)getAllShops __attribute__((swift_name("getAllShops()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadAllProductsUseCase")))
@interface OnlineshoplibraryLoadAllProductsUseCase : OnlineshoplibraryBase
- (instancetype)initWithProductRepository:(id<OnlineshoplibraryProductRepository>)productRepository dispatcherProvider:(OnlineshoplibraryDispatcherProvider *)dispatcherProvider __attribute__((swift_name("init(productRepository:dispatcherProvider:)"))) __attribute__((objc_designated_initializer));
- (void)executeShopId:(int64_t)shopId __attribute__((swift_name("execute(shopId:)")));
@property void (^ _Nullable onFail)(void) __attribute__((swift_name("onFail")));
@property void (^ _Nullable onSuccess)(NSArray<OnlineshoplibraryProductEntity *> *) __attribute__((swift_name("onSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadAllShoppesUseCase")))
@interface OnlineshoplibraryLoadAllShoppesUseCase : OnlineshoplibraryBase
- (instancetype)initWithShopRepository:(id<OnlineshoplibraryShopRepository>)shopRepository dispatcherProvider:(OnlineshoplibraryDispatcherProvider *)dispatcherProvider __attribute__((swift_name("init(shopRepository:dispatcherProvider:)"))) __attribute__((objc_designated_initializer));
- (void)execute __attribute__((swift_name("execute()")));
@property void (^ _Nullable onFail)(void) __attribute__((swift_name("onFail")));
@property void (^ _Nullable onSuccess)(NSArray<OnlineshoplibraryShopEntity *> *) __attribute__((swift_name("onSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface OnlineshoplibraryKoin_coreKoinApplication : OnlineshoplibraryBase
@property (class, readonly, getter=companion) OnlineshoplibraryKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (OnlineshoplibraryKoin_coreKoinApplication *)loggerLogger:(OnlineshoplibraryKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (OnlineshoplibraryKoin_coreKoinApplication *)modulesModules:(OnlineshoplibraryKotlinArray<OnlineshoplibraryKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (OnlineshoplibraryKoin_coreKoinApplication *)modulesModules_:(NSArray<OnlineshoplibraryKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (OnlineshoplibraryKoin_coreKoinApplication *)modulesModules__:(OnlineshoplibraryKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (OnlineshoplibraryKoin_coreKoinApplication *)printLoggerLevel:(OnlineshoplibraryKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (OnlineshoplibraryKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<OnlineshoplibraryKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(OnlineshoplibraryKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) OnlineshoplibraryKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

@interface OnlineshoplibraryKoin_coreKoinApplication (Extensions)
- (OnlineshoplibraryKoin_coreKoinApplication *)koinModules __attribute__((swift_name("koinModules()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinModulesKt")))
@interface OnlineshoplibraryKoinModulesKt : OnlineshoplibraryBase
+ (OnlineshoplibraryKoin_coreModule *)appModule __attribute__((swift_name("appModule()")));
+ (OnlineshoplibraryKoin_coreModule *)diModule __attribute__((swift_name("diModule()")));
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface OnlineshoplibraryPlatform_iosKt : OnlineshoplibraryBase
+ (id<OnlineshoplibraryPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface OnlineshoplibraryKoin_coreKoin : OnlineshoplibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (OnlineshoplibraryKoin_coreScope *)createScopeT:(id<OnlineshoplibraryKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (OnlineshoplibraryKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (OnlineshoplibraryKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (OnlineshoplibraryKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<OnlineshoplibraryKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<OnlineshoplibraryKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<OnlineshoplibraryKotlinKClass>)clazz qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (OnlineshoplibraryKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (OnlineshoplibraryKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<OnlineshoplibraryKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<OnlineshoplibraryKotlinKClass>)clazz qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (OnlineshoplibraryKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (OnlineshoplibraryKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<OnlineshoplibraryKotlinLazy>)injectQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier mode:(OnlineshoplibraryKotlinLazyThreadSafetyMode *)mode parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<OnlineshoplibraryKotlinLazy>)injectOrNullQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier mode:(OnlineshoplibraryKotlinLazyThreadSafetyMode *)mode parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<OnlineshoplibraryKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(OnlineshoplibraryKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<OnlineshoplibraryKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) OnlineshoplibraryKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) OnlineshoplibraryKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) OnlineshoplibraryKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) OnlineshoplibraryKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol OnlineshoplibraryKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<OnlineshoplibraryKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<OnlineshoplibraryKotlinCoroutineContextElement> _Nullable)getKey:(id<OnlineshoplibraryKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<OnlineshoplibraryKotlinCoroutineContext>)minusKeyKey:(id<OnlineshoplibraryKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<OnlineshoplibraryKotlinCoroutineContext>)plusContext:(id<OnlineshoplibraryKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol OnlineshoplibraryKotlinCoroutineContextElement <OnlineshoplibraryKotlinCoroutineContext>
@required
@property (readonly) id<OnlineshoplibraryKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface OnlineshoplibraryKotlinAbstractCoroutineContextElement : OnlineshoplibraryBase <OnlineshoplibraryKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<OnlineshoplibraryKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<OnlineshoplibraryKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol OnlineshoplibraryKotlinContinuationInterceptor <OnlineshoplibraryKotlinCoroutineContextElement>
@required
- (id<OnlineshoplibraryKotlinContinuation>)interceptContinuationContinuation:(id<OnlineshoplibraryKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<OnlineshoplibraryKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher : OnlineshoplibraryKotlinAbstractCoroutineContextElement <OnlineshoplibraryKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<OnlineshoplibraryKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<OnlineshoplibraryKotlinCoroutineContext>)context block:(id<OnlineshoplibraryKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<OnlineshoplibraryKotlinCoroutineContext>)context block:(id<OnlineshoplibraryKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<OnlineshoplibraryKotlinContinuation>)interceptContinuationContinuation:(id<OnlineshoplibraryKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<OnlineshoplibraryKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<OnlineshoplibraryKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface OnlineshoplibraryKoin_coreKoinApplicationCompanion : OnlineshoplibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OnlineshoplibraryKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (OnlineshoplibraryKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface OnlineshoplibraryKoin_coreLogger : OnlineshoplibraryBase
- (instancetype)initWithLevel:(OnlineshoplibraryKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(OnlineshoplibraryKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(OnlineshoplibraryKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(OnlineshoplibraryKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property OnlineshoplibraryKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface OnlineshoplibraryKoin_coreModule : OnlineshoplibraryBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (OnlineshoplibraryKotlinPair<OnlineshoplibraryKoin_coreModule *, OnlineshoplibraryKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(OnlineshoplibraryKotlinArray<OnlineshoplibraryKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<OnlineshoplibraryKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<OnlineshoplibraryKoin_coreModule *> *)plusModules:(NSArray<OnlineshoplibraryKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<OnlineshoplibraryKoin_coreModule *> *)plusModule:(OnlineshoplibraryKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeScopeSet:(void (^)(OnlineshoplibraryKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<OnlineshoplibraryKoin_coreQualifier>)qualifier scopeSet:(void (^)(OnlineshoplibraryKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (OnlineshoplibraryKotlinPair<OnlineshoplibraryKoin_coreModule *, OnlineshoplibraryKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) OnlineshoplibraryMutableSet<OnlineshoplibraryKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface OnlineshoplibraryKotlinArray<T> : OnlineshoplibraryBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(OnlineshoplibraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<OnlineshoplibraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol OnlineshoplibraryKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface OnlineshoplibraryKotlinEnum<E> : OnlineshoplibraryBase <OnlineshoplibraryKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OnlineshoplibraryKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface OnlineshoplibraryKoin_coreLevel : OnlineshoplibraryKotlinEnum<OnlineshoplibraryKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OnlineshoplibraryKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) OnlineshoplibraryKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) OnlineshoplibraryKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) OnlineshoplibraryKoin_coreLevel *none __attribute__((swift_name("none")));
+ (OnlineshoplibraryKotlinArray<OnlineshoplibraryKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface OnlineshoplibraryKoin_coreLockable : OnlineshoplibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface OnlineshoplibraryKoin_coreScope : OnlineshoplibraryKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<OnlineshoplibraryKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(OnlineshoplibraryKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (OnlineshoplibraryKoin_coreScope *)doCopyScopeQualifier:(id<OnlineshoplibraryKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(OnlineshoplibraryKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<OnlineshoplibraryKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<OnlineshoplibraryKotlinKClass>)clazz qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<OnlineshoplibraryKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (OnlineshoplibraryKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<OnlineshoplibraryKotlinKClass>)clazz qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (OnlineshoplibraryKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<OnlineshoplibraryKotlinLazy>)injectQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier mode:(OnlineshoplibraryKotlinLazyThreadSafetyMode *)mode parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<OnlineshoplibraryKotlinLazy>)injectOrNullQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier mode:(OnlineshoplibraryKotlinLazyThreadSafetyMode *)mode parameters:(OnlineshoplibraryKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(OnlineshoplibraryKotlinArray<OnlineshoplibraryKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<OnlineshoplibraryKotlinKClass>)clazz qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<OnlineshoplibraryKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(OnlineshoplibraryKotlinArray<OnlineshoplibraryKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<OnlineshoplibraryKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) OnlineshoplibraryKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<OnlineshoplibraryKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol OnlineshoplibraryKoin_coreKoinScopeComponent <OnlineshoplibraryKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) OnlineshoplibraryKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol OnlineshoplibraryKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol OnlineshoplibraryKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol OnlineshoplibraryKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol OnlineshoplibraryKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol OnlineshoplibraryKotlinKClass <OnlineshoplibraryKotlinKDeclarationContainer, OnlineshoplibraryKotlinKAnnotatedElement, OnlineshoplibraryKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface OnlineshoplibraryKoin_coreParametersHolder : OnlineshoplibraryBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OnlineshoplibraryKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (OnlineshoplibraryKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<OnlineshoplibraryKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<OnlineshoplibraryKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (OnlineshoplibraryKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol OnlineshoplibraryKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface OnlineshoplibraryKotlinLazyThreadSafetyMode : OnlineshoplibraryKotlinEnum<OnlineshoplibraryKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OnlineshoplibraryKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) OnlineshoplibraryKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) OnlineshoplibraryKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (OnlineshoplibraryKotlinArray<OnlineshoplibraryKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<OnlineshoplibraryKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface OnlineshoplibraryKoin_coreInstanceRegistry : OnlineshoplibraryBase
- (instancetype)initWith_koin:(OnlineshoplibraryKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(OnlineshoplibraryKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) OnlineshoplibraryKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, OnlineshoplibraryKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface OnlineshoplibraryKoin_corePropertyRegistry : OnlineshoplibraryBase
- (instancetype)initWith_koin:(OnlineshoplibraryKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface OnlineshoplibraryKoin_coreScopeRegistry : OnlineshoplibraryBase
- (instancetype)initWith_koin:(OnlineshoplibraryKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OnlineshoplibraryKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<OnlineshoplibraryKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) OnlineshoplibraryKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<OnlineshoplibraryKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol OnlineshoplibraryKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol OnlineshoplibraryKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<OnlineshoplibraryKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface OnlineshoplibraryKotlinAbstractCoroutineContextKey<B, E> : OnlineshoplibraryBase <OnlineshoplibraryKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<OnlineshoplibraryKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<OnlineshoplibraryKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcherKey : OnlineshoplibraryKotlinAbstractCoroutineContextKey<id<OnlineshoplibraryKotlinContinuationInterceptor>, OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<OnlineshoplibraryKotlinCoroutineContextKey>)baseKey safeCast:(id<OnlineshoplibraryKotlinCoroutineContextElement> _Nullable (^)(id<OnlineshoplibraryKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OnlineshoplibraryKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol OnlineshoplibraryKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface OnlineshoplibraryKoin_coreInstanceFactory<T> : OnlineshoplibraryKoin_coreLockable
- (instancetype)initWithBeanDefinition:(OnlineshoplibraryKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) OnlineshoplibraryKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(OnlineshoplibraryKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(OnlineshoplibraryKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(OnlineshoplibraryKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(OnlineshoplibraryKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) OnlineshoplibraryKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface OnlineshoplibraryKotlinPair<__covariant A, __covariant B> : OnlineshoplibraryBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (OnlineshoplibraryKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface OnlineshoplibraryKoin_coreScopeDSL : OnlineshoplibraryBase
- (instancetype)initWithScopeQualifier:(id<OnlineshoplibraryKoin_coreQualifier>)scopeQualifier module:(OnlineshoplibraryKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (OnlineshoplibraryKotlinPair<OnlineshoplibraryKoin_coreModule *, OnlineshoplibraryKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (OnlineshoplibraryKotlinPair<OnlineshoplibraryKoin_coreModule *, OnlineshoplibraryKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (OnlineshoplibraryKotlinPair<OnlineshoplibraryKoin_coreModule *, OnlineshoplibraryKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) OnlineshoplibraryKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<OnlineshoplibraryKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface OnlineshoplibraryKoin_coreSingleInstanceFactory<T> : OnlineshoplibraryKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(OnlineshoplibraryKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(OnlineshoplibraryKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(OnlineshoplibraryKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(OnlineshoplibraryKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(OnlineshoplibraryKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol OnlineshoplibraryKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface OnlineshoplibraryKotlinEnumCompanion : OnlineshoplibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OnlineshoplibraryKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol OnlineshoplibraryKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(OnlineshoplibraryKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface OnlineshoplibraryKoin_coreParametersHolderCompanion : OnlineshoplibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OnlineshoplibraryKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface OnlineshoplibraryKoin_coreScopeRegistryCompanion : OnlineshoplibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OnlineshoplibraryKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface OnlineshoplibraryKoin_coreBeanDefinition<T> : OnlineshoplibraryBase
- (instancetype)initWithScopeQualifier:(id<OnlineshoplibraryKoin_coreQualifier>)scopeQualifier primaryType:(id<OnlineshoplibraryKotlinKClass>)primaryType qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition kind:(OnlineshoplibraryKoin_coreKind *)kind secondaryTypes:(NSArray<id<OnlineshoplibraryKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (OnlineshoplibraryKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<OnlineshoplibraryKoin_coreQualifier>)scopeQualifier primaryType:(id<OnlineshoplibraryKotlinKClass>)primaryType qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *))definition kind:(OnlineshoplibraryKoin_coreKind *)kind secondaryTypes:(NSArray<id<OnlineshoplibraryKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<OnlineshoplibraryKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<OnlineshoplibraryKotlinKClass>)clazz qualifier:(id<OnlineshoplibraryKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<OnlineshoplibraryKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property OnlineshoplibraryKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(OnlineshoplibraryKoin_coreScope *, OnlineshoplibraryKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) OnlineshoplibraryKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<OnlineshoplibraryKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<OnlineshoplibraryKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<OnlineshoplibraryKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<OnlineshoplibraryKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface OnlineshoplibraryKoin_coreInstanceFactoryCompanion : OnlineshoplibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OnlineshoplibraryKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface OnlineshoplibraryKoin_coreInstanceContext : OnlineshoplibraryBase
- (instancetype)initWithKoin:(OnlineshoplibraryKoin_coreKoin *)koin scope:(OnlineshoplibraryKoin_coreScope *)scope parameters:(OnlineshoplibraryKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) OnlineshoplibraryKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) OnlineshoplibraryKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) OnlineshoplibraryKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface OnlineshoplibraryKoin_coreKind : OnlineshoplibraryKotlinEnum<OnlineshoplibraryKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OnlineshoplibraryKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) OnlineshoplibraryKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) OnlineshoplibraryKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (OnlineshoplibraryKotlinArray<OnlineshoplibraryKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface OnlineshoplibraryKoin_coreCallbacks<T> : OnlineshoplibraryBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (OnlineshoplibraryKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
