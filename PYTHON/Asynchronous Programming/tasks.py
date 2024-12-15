import asyncio


async def task_one():
    await asyncio.sleep(1)
    print('Task One Done')


async def task_two():
    await asyncio.sleep(2)
    print('Task Two Done')


async def main():
    task1 = asyncio.create_task(task_one())
    task2 = asyncio.create_task(task_two())
    await task1
    await task2
    
asyncio.run(main())
