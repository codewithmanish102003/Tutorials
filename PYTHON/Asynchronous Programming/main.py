import asyncio

async def fetch_data():
    print("Start fetching data...")
    await asyncio.sleep(2)  # Simulate I/O-bound task
    print("Data fetched!")
    return "Some data"

async def main():
    result = await fetch_data()
    print(result)

asyncio.run(main())
